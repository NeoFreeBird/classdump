//
#ifndef UIWindowScene_TFNAdditions_h
#define UIWindowScene_TFNAdditions_h
@import Foundation;

@interface UIWindowScene (TFNAdditions)

/* instance methods */
- (void)tfn_setTitleIfOnlyWindow:(id)window titleFormatIfMultipleWindows:(id)windows;

@end

#endif /* UIWindowScene_TFNAdditions_h */
