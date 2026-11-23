//
#ifndef TFNItemsDataViewSnapshot_h
#define TFNItemsDataViewSnapshot_h
@import Foundation;

@class NSDiffableDataSourceSnapshot, NSMutableDictionary, NSObject;

@interface TFNItemsDataViewSnapshot : NSObject

@property (retain, nonatomic) NSDiffableDataSourceSnapshot *snapshot;
@property (retain, nonatomic) NSMutableDictionary *dataViewItemsByObjectIdentifier;
@property (nonatomic) _Bool isReloadData;
@property (nonatomic) _Bool isAnimated;
@property (nonatomic) long long animationStyle;

/* instance methods */
- (id)init;

@end

#endif /* TFNItemsDataViewSnapshot_h */
