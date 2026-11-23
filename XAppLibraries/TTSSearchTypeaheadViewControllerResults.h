//
#ifndef TTSSearchTypeaheadViewControllerResults_h
#define TTSSearchTypeaheadViewControllerResults_h
@import Foundation;

@class NSObject, NSSet, NSString, TFSTwitterTypeaheadResults;

@interface TTSSearchTypeaheadViewControllerResults : NSObject

@property (readonly, copy, nonatomic) NSString *typeaheadString;
@property (readonly, nonatomic) TFSTwitterTypeaheadResults *prefetch;
@property (readonly, nonatomic) TFSTwitterTypeaheadResults *remote;
@property (readonly, copy, nonatomic) NSSet *prefetchUserSet;

/* instance methods */
- (id)init;
- (id)initWithTypeaheadString:(id)string prefetchResults:(id)results remoteResults:(id)results;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToTypeaheadResults:(id)results;

@end

#endif /* TTSSearchTypeaheadViewControllerResults_h */
