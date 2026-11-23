//
#ifndef TFNSignalBarsImage_h
#define TFNSignalBarsImage_h
@import Foundation;

@class NSObject;

@interface TFNSignalBarsImage : NSObject // (Swift)

/* class methods */
+ (id)imageWithLevel:(long long)level height:(double)height activeColor:(id)color inactiveColor:(id)color;

/* instance methods */
- (id)init;

@end

#endif /* TFNSignalBarsImage_h */
