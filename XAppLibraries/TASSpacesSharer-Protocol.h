//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef TASSpacesSharer_Protocol_h
#define TASSpacesSharer_Protocol_h
@import Foundation;

@protocol TASSpacesSharer

@required

/* required instance methods */
- (void)shareViaActivityViewFor:(id)_for on:(id)on from:(id)from;
- (void)shareViaTweetFor:(id)_for context:(long long)context overridingScribeContext:(id)context scribeComponent:(id)component presentCompletionBlock:(id /* block */)block;
- (void)shareViaDMFor:(id)dmfor on:(id)on overridingScribeContext:(id)context scribeComponent:(id)component prefilledText:(id)text;

@optional

@end

#endif /* TASSpacesSharer_Protocol_h */
