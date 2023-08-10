//Simple version

#include <iostream>
#include <string>
#include <vector>

class Ransomware {
public:
    Ransomware(const std::vector<std::string>& bitcoinAddresses) {
        this->bitcoinAddresses = bitcoinAddresses;
        paymentStatus = false;
    }

    void execute() {
        encryptFiles();
        generateRansomNote();
        sendBitcoinAddresses();
        paymentStatus = true;
    }

    bool getPaymentStatus() const {
        return paymentStatus;
    }

private:
    std::vector<std::string> bitcoinAddresses;
    bool paymentStatus;

    void encryptFiles() {
        // Simulate file encryption process
        std::cout << "Files encrypted." << std::endl;
    }

    void generateRansomNote() {
        // Simulate ransom note generation
        std::cout << "Ransom note generated." << std::endl;
    }

    void sendBitcoinAddresses() {
        // Simulate sending Bitcoin addresses
        std::cout << "Bitcoin addresses sent." << std::endl;
    }
};

int main() {
    std::vector<std::string> bitcoinAddresses = {
        "Addresses1",
        "Addresses2",
        "Addresses3"
    };

    Ransomware ransomware(bitcoinAddresses);
    ransomware.execute();

    if (ransomware.getPaymentStatus()) {
        std::cout << "Ransomware executed successfully. Your files are encrypted." << std::endl;
    } else {
        std::cout << "Ransomware execution failed." << std::endl;
    }

    return 0;
}
