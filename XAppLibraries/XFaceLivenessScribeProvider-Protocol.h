//
#ifndef XFaceLivenessScribeProvider_Protocol_h
#define XFaceLivenessScribeProvider_Protocol_h
@import Foundation;

@protocol XFaceLivenessScribeProvider

@required

/* required instance methods */
- (void)logAction:(id)action page:(id)page section:(id)section component:(id)component element:(id)element;

@optional

@end

#endif /* XFaceLivenessScribeProvider_Protocol_h */
