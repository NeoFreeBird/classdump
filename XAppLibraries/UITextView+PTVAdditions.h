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
