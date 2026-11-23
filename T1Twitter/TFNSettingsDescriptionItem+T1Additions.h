//
#ifndef TFNSettingsDescriptionItem_T1Additions_h
#define TFNSettingsDescriptionItem_T1Additions_h
@import Foundation;

@interface TFNSettingsDescriptionItem (T1Additions)

/* instance methods */
- (id)initForLearnMoreActionWithFormatString:(id)string url:(id)url scribeContext:(id)context account:(id)account;
- (id)initWithFormatString:(id)string callToActionText:(id)text url:(id)url scribeContext:(id)context account:(id)account;
- (id)initWithFormatString:(id)string callToActionText:(id)text scribeContext:(id)context actionBlock:(id /* block */)block;

@end

#endif /* TFNSettingsDescriptionItem_T1Additions_h */
