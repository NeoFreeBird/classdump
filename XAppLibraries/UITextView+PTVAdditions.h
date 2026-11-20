//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UITextView_PTVAdditions_h
#define UITextView_PTVAdditions_h
@import Foundation;

@interface UITextView (PTVAdditions)

/* class methods */
+ (id)ptv_LinkDetectionTextView;
+ (id)ptv_LinkDetectionTextViewWithHashtagSelectionCallback:(id /* block */)callback;

@end

#endif /* UITextView_PTVAdditions_h */
