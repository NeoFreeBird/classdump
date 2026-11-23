//
#ifndef ObjCGrokSearchSummaryProperties_h
#define ObjCGrokSearchSummaryProperties_h
@import Foundation;

@class NSObject, NSString;

@interface ObjCGrokSearchSummaryProperties : NSObject

@property (readonly, copy, nonatomic) NSString *searchID;
@property (readonly, copy, nonatomic) NSString *query;
@property (readonly, copy, nonatomic) NSString *followUpPrompt;

/* instance methods */
- (id)initWithSearchID:(id)id query:(id)query followUpPrompt:(id)prompt;

@end

#endif /* ObjCGrokSearchSummaryProperties_h */
