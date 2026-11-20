//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
