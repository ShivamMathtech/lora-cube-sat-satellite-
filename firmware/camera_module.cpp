#include "camera_module.h"
#include "esp_camera.h"

void initCamera()
{
    Serial.println("Camera Initialized");
}

void captureImage()
{
    camera_fb_t * fb = esp_camera_fb_get();

    if(!fb)
    {
        Serial.println("Camera Capture Failed");
        return;
    }

    Serial.print("Image Captured: ");
    Serial.println(fb->len);

    esp_camera_fb_return(fb);
}