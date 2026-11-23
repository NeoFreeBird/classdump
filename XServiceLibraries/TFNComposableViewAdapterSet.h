//
#ifndef TFNComposableViewAdapterSet_h
#define TFNComposableViewAdapterSet_h
@import Foundation;

@class NSDictionary, NSObject;

@interface TFNComposableViewAdapterSet : NSObject

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) NSDictionary *viewAdaptersByIdentifier;

/* instance methods */
- (id)initWithViewAdapters:(id)adapters;
- (id)initWithViewAdaptersByIdentifier:(id)identifier;
- (id)init;
- (id)objectAtIndexedSubscript:(long long)subscript;
- (void)enumerateViewAdaptersUsingBlock:(id /* block */)block;
- (void)populateLayoutStateSet:(id)set withValidViewIdentifiers:(id)identifiers inPreviousLayoutState:(id)state;
- (id)viewIdentifiersWithValidLayoutStateInSet:(id)set forViewModel:(id)model layoutMetrics:(id)metrics;

@end

#endif /* TFNComposableViewAdapterSet_h */
