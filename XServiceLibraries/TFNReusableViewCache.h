//
#ifndef TFNReusableViewCache_h
#define TFNReusableViewCache_h
@import Foundation;

#include "TFNViewCache.h"

@class NSObject;

@interface TFNReusableViewCache : NSObject

@property (readonly, nonatomic) TFNViewCache *genericViews;
@property (readonly, nonatomic) TFNViewCache *reservedViews;
@property (nonatomic) unsigned long long generalViewCountLimit;
@property (nonatomic) unsigned long long modelBoundViewCountLimit;
@property (copy, nonatomic) id /* block */ didEvictReservedViewBlock;

/* class methods */
+ (id)sharedCache;

/* instance methods */
- (id)init;
- (id)entryForViewWithIdentifier:(id)identifier modelIdentifier:(id)identifier;
- (void)putView:(id)view withIdentifier:(id)identifier forModelIdentifier:(id)identifier;
- (void)putView:(id)view withIdentifier:(id)identifier;
- (void)removeAllViews;
- (void)_tfn_didEvictReservedView:(id)view forIdentifier:(id)identifier;

@end

#endif /* TFNReusableViewCache_h */
