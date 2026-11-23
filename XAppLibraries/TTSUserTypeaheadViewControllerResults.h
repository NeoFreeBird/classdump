//
#ifndef TTSUserTypeaheadViewControllerResults_h
#define TTSUserTypeaheadViewControllerResults_h
@import Foundation;

@class NSArray, NSObject, NSSet, NSString;

@interface TTSUserTypeaheadViewControllerResults : NSObject

@property (readonly, copy, nonatomic) NSString *typeaheadString;
@property (readonly, copy, nonatomic) NSArray *prefetch;
@property (readonly, copy, nonatomic) NSArray *remote;
@property (readonly, copy, nonatomic) NSSet *prefetchUserSet;

/* instance methods */
- (id)init;
- (id)initWithTypeaheadString:(id)string prefetchResults:(id)results remoteResults:(id)results;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)equal;
- (_Bool)isEqualToTypeaheadResults:(id)results;

@end

#endif /* TTSUserTypeaheadViewControllerResults_h */
