//
#ifndef T1ProfileWithheldNotice_h
#define T1ProfileWithheldNotice_h
@import Foundation;

@class NSArray, NSObject, NSString;

@interface T1ProfileWithheldNotice : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, copy, nonatomic) NSArray *links;
@property (readonly, copy, nonatomic) NSArray *linkURLs;

/* instance methods */
- (id)initWithText:(id)text entities:(id)entities;
- (id)urlForLinkId:(long long)id;

@end

#endif /* T1ProfileWithheldNotice_h */
