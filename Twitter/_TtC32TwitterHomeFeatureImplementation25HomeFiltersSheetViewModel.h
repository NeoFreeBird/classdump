//
#ifndef _TtC32TwitterHomeFeatureImplementation25HomeFiltersSheetViewModel_h
#define _TtC32TwitterHomeFeatureImplementation25HomeFiltersSheetViewModel_h
@import Foundation;

@class NSArray, NSObject, NSString, TwitterHomeFeatureImplementation.HomeFiltersSheetFilterType, TwitterHomeFeatureImplementation.HomeFiltersSheetSelectionMode, _$sSSSg, _$sSa -> _$s11TwitterHome0B12FilterOptionCMn, _$sSaySSG;

@interface TwitterHomeFeatureImplementation.HomeFiltersSheetViewModel : NSObject // (Swift)

@property (nonatomic, readonly) long long filterType;
@property (nonatomic, readonly) long long selectionMode;
@property (nonatomic, readonly) NSArray *options;
@property (nonatomic, readonly) NSArray *selectedIdentifiers;
@property (nonatomic, readonly) NSString *label;

/* class methods */
+ (id)makeRegionViewModelFrom:(id)from;
+ (id)makeTopicViewModelFrom:(id)from;

/* instance methods */
- (id)initWithFilterType:(long long)type selectionMode:(long long)mode options:(id)options selectedIdentifiers:(id)identifiers label:(id)label;
- (id)init;

@end

#endif /* _TtC32TwitterHomeFeatureImplementation25HomeFiltersSheetViewModel_h */
