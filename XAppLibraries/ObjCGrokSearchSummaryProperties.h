//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
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
