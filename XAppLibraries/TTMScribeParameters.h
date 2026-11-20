//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TTMScribeParameters_h
#define TTMScribeParameters_h
@import Foundation;

@class NSObject;

@interface TTMScribeParameters : NSObject

/* class methods */
+ (id)scribeComponentForSourceType:(long long)type;
+ (id)scribeElementForSourceType:(long long)type assetType:(unsigned long long)type;

@end

#endif /* TTMScribeParameters_h */
