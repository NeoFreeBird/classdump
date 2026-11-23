//
#ifndef TFNQRCodeGenerator_h
#define TFNQRCodeGenerator_h
@import Foundation;

@class NSObject, NSString, UIColor;

@interface TFNQRCodeGenerator : NSObject {
    /* instance variables */
    UIColor *_fillColor;
    NSString *_code;
    unsigned long long _originalQRSize;
    int * * _qrBitmap;
}

@property (readonly, nonatomic) UIColor *backgroundColor;

/* instance methods */
- (id)initWithCode:(id)code;
- (id)drawAtSize:(double)size;
- (void)_tfn_generateQRCodeIfNeeded;
- (void)_tfn_generateQRCode;
- (void)_tfn_generateBitmapFromQRImage:(struct CGImage *)qrimage;
- (id)_tfn_drawAtSize:(double)size;

@end

#endif /* TFNQRCodeGenerator_h */
