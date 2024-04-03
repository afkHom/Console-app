#include "includes.h"
#include "HWID.h"
#include <iostream>
#include <E:\exclusions\curl-7.70.0\include\curl\curl.h> //i hate that i fixed it like this but i really dont care 
#include <Windows.h> 

using namespace std;

// Declare functions for sending webhook
size_t WriteCallback(void* contents, size_t size, size_t nmemb, string* buffer);
void sendWebhook(const string& message);

gMal mal;
Gjesus jsus;
GHWID_H ghid;

int main()
{
    // Get hardware information
    ghid.GetCpuId();
    ghid.GetMotherboardSerial();

    // Display logo
    mal.logo();
    cout << "test program| Executable name sumfinn.exe\n";
    Sleep(1500);
    system("cls");

    // Display acceptance/denial message for testing
    mal.accptdeny(); // for testing

    // Ask questions
    mal.questions();

    // Send webhook message
    string message = "Test message from C++ program";
    sendWebhook(message);

    return 0;
}

// Callback function to write response from HTTP request
size_t WriteCallback(void* contents, size_t size, size_t nmemb, string* buffer)
{
    buffer->append((char*)contents, size * nmemb);
    return size * nmemb;
}

// Function to send webhook
void sendWebhook(const string& message)
{
    CURL* curl;
    CURLcode res;
    string buffer;

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();
    if (curl) {
        // Set webhook URL
        curl_easy_setopt(curl, CURLOPT_URL, "YOUR_DISCORD_WEBHOOK_URL");
        // Set POST request
        curl_easy_setopt(curl, CURLOPT_POST, 1L);

        // Craft JSON payload with message
        string jsonPayload = "{\"content\": \"" + message + "\"}";

        // Set payload
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, jsonPayload.c_str());

        // Set callback function to capture response
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &buffer);

        // Perform request
        res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
            cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << endl;
        }
        else {
            cout << "Webhook sent successfully!" << endl;
            cout << "Response from Discord: " << buffer << endl;
        }

        // Cleanup
        curl_easy_cleanup(curl);
    }

    curl_global_cleanup();
}
