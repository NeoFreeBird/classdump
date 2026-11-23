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
