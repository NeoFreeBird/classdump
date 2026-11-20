//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef NSObject_TFNItemsDataViewSupport_OCFUI_h
#define NSObject_TFNItemsDataViewSupport_OCFUI_h
@import Foundation;

@interface NSObject (TFNItemsDataViewSupport_OCFUI)

/* instance methods */
- (id)ocf_withBorderlessCellCustomization;
- (id)ocf_withCustomEdgeInsetsForTop:(double)top bottom:(double)bottom;

@end

#endif /* NSObject_TFNItemsDataViewSupport_OCFUI_h */
