//
#ifndef TFSTwitterVideoMonetizationCategory_h
#define TFSTwitterVideoMonetizationCategory_h
@import Foundation;

@class NSNumber, NSObject, NSString;

@interface TFSTwitterVideoMonetizationCategory : NSObject

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSNumber *categoryID;
@property (readonly, nonatomic) NSNumber *parentCategoryID;

/* instance methods */
- (id)init;
- (id)initWithCategoryName:(id)name categoryID:(id)id parentCategoryID:(id)id;

@end

#endif /* TFSTwitterVideoMonetizationCategory_h */
