//
#ifndef OCFComponentCollection_h
#define OCFComponentCollection_h
@import Foundation;

#include "NSCopying-Protocol.h"
#include "NSMutableCopying-Protocol.h"
#include "OCFComponent.h"
#include "OCFNavigationLink.h"

@class NSArray, NSDictionary, NSObject;

@interface OCFComponentCollection : NSObject <NSCopying, NSMutableCopying> {
    /* instance variables */
    NSDictionary *_componentsByIdentifier;
}

@property (readonly, nonatomic) NSArray *leftNavbarComponents;
@property (readonly, nonatomic) NSArray *rightNavbarComponents;
@property (readonly, nonatomic) NSArray *headerComponents;
@property (readonly, nonatomic) NSArray *footerComponents;
@property (readonly, nonatomic) NSArray *contentHeaderComponents;
@property (readonly, nonatomic) NSArray *contentFooterComponents;
@property (readonly, nonatomic) NSArray *pinnedFooterComponents;
@property (readonly, nonatomic) long long contentVerticalAlignment;
@property (readonly, nonatomic) OCFComponent *primaryNextComponent;
@property (readonly, nonatomic) OCFComponent *primarySkipComponent;
@property (readonly, nonatomic) OCFComponent *primaryDetailComponent;
@property (readonly, nonatomic) OCFNavigationLink *primaryNextLink;
@property (readonly, nonatomic) OCFNavigationLink *primarySkipLink;

/* class methods */
+ (id)collectionWithCollection:(id)collection layout:(long long)layout header:(id)header upperDetailText:(id)text middleDetailText:(id)text lowerDetailText:(id)text nextLink:(id)link skipLink:(id)link buttons:(id)buttons options:(long long)options;
+ (long long)private_buttonSizeClassForNavbarButtonsLayout:(_Bool)layout;

/* instance methods */
- (id)initWithJSONDictionary:(id)jsondictionary componentFactory:(Class)factory error:(id *)error;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)zone;
- (id)mutableCopyWithZone:(struct _NSZone *)zone;
- (id)private_componentsByIdentifier;
- (id)private_componentWithIdentifier:(id)identifier error:(id *)error;

@end

#endif /* OCFComponentCollection_h */
