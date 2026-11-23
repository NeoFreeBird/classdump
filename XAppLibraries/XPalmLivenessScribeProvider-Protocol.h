//
#ifndef XPalmLivenessScribeProvider_Protocol_h
#define XPalmLivenessScribeProvider_Protocol_h
@import Foundation;

@protocol XPalmLivenessScribeProvider

@required

/* required instance methods */
- (void)logAction:(id)action page:(id)page section:(id)section component:(id)component element:(id)element;

@optional

@end

#endif /* XPalmLivenessScribeProvider_Protocol_h */
