#ifndef _EPD_BWRY_VAR_030_H_
#define _EPD_BWRY_VAR_030_H_

class epdvar030bwry : public epdInterface {
   public:
    uint8_t getSleepGpioHighMask() const override {
        printf("sleep pins config OK\n");
        return EPD_SLEEP_CS_HIGH | EPD_SLEEP_RST_HIGH;
    }

     void epdSetup() ;
     void epdEnterSleep() ;
     void draw();
     void drawNoWait();
     void epdWaitRdy();
     void epdWriteDisplayData();
     void selectLUT(uint8_t lut);
    protected:
     void calculatePixels(uint8_t* dst, uint8_t* src, uint8_t color);
};

#endif