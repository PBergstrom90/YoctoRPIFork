#include <stdio.h>
#include <stdlib.h>

int main() {
    // URL for webhook
    const char* url = "https://webhook.site/f7e2483f-6877-4ed1-8fb8-7a58ce137074";
    
    // Command to execute
    char command[256];
    snprintf(command, sizeof(command), "wget --post-data='Hello from Pontus hello-internet' -qO- %s", url);
    int ret = system(command);

    // Check the result of the system command
    if (ret == 0) {
        printf("HTTP POST request sent successfully!\n");
    } else {
        printf("Failed to send HTTP POST request.\n");
    }
    return 0;
}
