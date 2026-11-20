//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef UIPasteboard_TFNAdditions_h
#define UIPasteboard_TFNAdditions_h
@import Foundation;

@interface UIPasteboard (TFNAdditions)

/* instance methods */
- (_Bool)tfn_hasURLs;
- (_Bool)_tfn_hasInaccessibleNSURLs;
- (id)tfn_URL;
- (id)tfn_stringAsURL;

@end

#endif /* UIPasteboard_TFNAdditions_h */
