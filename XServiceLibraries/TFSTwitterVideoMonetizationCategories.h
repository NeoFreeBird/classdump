//
#ifndef TFSTwitterVideoMonetizationCategories_h
#define TFSTwitterVideoMonetizationCategories_h
@import Foundation;

@class NSArray, NSObject;

@interface TFSTwitterVideoMonetizationCategories : NSObject

@property (readonly, nonatomic) NSArray *monetizationCategories;
@property (readonly, nonatomic) NSArray *adsCategories;

/* class methods */
+ (id)videoMonetizationCategoriesWithJSONData:(id)jsondata error:(out id *)error;

/* instance methods */
- (id)init;
- (id)initWithMonetizationCategories:(id)categories adsCategories:(id)categories;
- (id)initWithJSONDictionary:(id)jsondictionary;

@end

#endif /* TFSTwitterVideoMonetizationCategories_h */
