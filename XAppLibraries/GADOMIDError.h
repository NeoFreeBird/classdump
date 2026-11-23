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
