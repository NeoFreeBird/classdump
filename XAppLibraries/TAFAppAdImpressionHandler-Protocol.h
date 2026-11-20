//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TAFAppAdImpressionHandler_Protocol_h
#define TAFAppAdImpressionHandler_Protocol_h
@import Foundation;

@protocol TAFAppAdImpressionHandler

@required

/* required instance methods */
- (void)startImpressionWithPromotedContent:(id)content scribeContext:(id)context;
- (void)endImpressionWithPromotedContent:(id)content scribeContext:(id)context;

@optional

@end

#endif /* TAFAppAdImpressionHandler_Protocol_h */
