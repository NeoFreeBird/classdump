//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef GADOMIDError_h
#define GADOMIDError_h
@import Foundation;

@class NSObject;

@interface GADOMIDError : NSObject

/* class methods */
+ (void)setGADOMIDErrorFor:(id *)_for code:(unsigned long long)code message:(id)message;

@end

#endif /* GADOMIDError_h */
