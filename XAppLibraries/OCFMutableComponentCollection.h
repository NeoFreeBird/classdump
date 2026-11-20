//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 26.5, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef OCFMutableComponentCollection_h
#define OCFMutableComponentCollection_h
@import Foundation;

#include "OCFComponent.h"
#include "OCFComponentCollection.h"

@class NSArray;

@interface OCFMutableComponentCollection : OCFComponentCollection {
    /* instance variables */
    NSArray *_mContentFooterComponents;
    NSArray *_mContentHeaderComponents;
    NSArray *_mFooterComponents;
    NSArray *_mHeaderComponents;
    NSArray *_mLeftNavbarComponents;
    NSArray *_mPinnedFooterComponents;
    NSArray *_mRightNavbarComponents;
    long long _mContentVerticalAlignment;
    OCFComponent *_mPrimaryDetailComponent;
    OCFComponent *_mPrimaryNextComponent;
    OCFComponent *_mPrimarySkipComponent;
}

@property (copy, nonatomic) NSArray *leftNavbarComponents;
@property (copy, nonatomic) NSArray *rightNavbarComponents;
@property (copy, nonatomic) NSArray *headerComponents;
@property (copy, nonatomic) NSArray *footerComponents;
@property (copy, nonatomic) NSArray *contentHeaderComponents;
@property (copy, nonatomic) NSArray *contentFooterComponents;
@property (copy, nonatomic) NSArray *pinnedFooterComponents;
@property (nonatomic) long long contentVerticalAlignment;
@property (retain, nonatomic) OCFComponent *primaryNextComponent;
@property (retain, nonatomic) OCFComponent *primarySkipComponent;
@property (retain, nonatomic) OCFComponent *primaryDetailComponent;

/* instance methods */
- (void)addComponent:(id)component toLocation:(long long)location atBeginning:(_Bool)beginning;
- (void)addComponents:(id)components toLocation:(long long)location atBeginning:(_Bool)beginning;
- (id *)private_componentArrayForLocation:(long long)location;

@end

#endif /* OCFMutableComponentCollection_h */
