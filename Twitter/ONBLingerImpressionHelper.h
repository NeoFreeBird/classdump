//
#ifndef ONBLingerImpressionHelper_h
#define ONBLingerImpressionHelper_h
@import Foundation;

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject;

@interface ONBLingerImpressionHelper : NSObject {
    /* instance variables */
    NSMutableDictionary *_lingerStartDates;
}

@property (readonly, nonatomic) NSArray *impressions;
@property (readonly, nonatomic) NSDictionary *lingerTimes;

/* instance methods */
- (id)init;
- (void)updateVisibilityOfIdentifier:(id)identifier visibilityPercentage:(double)percentage;
- (id /* block */)cellDisplayBlockWithCellIdentifier:(id /* block */)identifier block:(id /* block */)block;
- (id /* block */)cellDisplayBlockWithSubrectIdentifier:(id /* block */)identifier block:(id /* block */)block;
- (id /* block */)cellEndDisplayBlockWithCellIdentifier:(id /* block */)identifier block:(id /* block */)block;
- (id /* block */)cellEndDisplayBlockWithSubrectIdentifier:(id /* block */)identifier block:(id /* block */)block;
- (id /* block */)private_subrectIdentifierBlockForCellIdentifierBlock:(id /* block */)block;

@end

#endif /* ONBLingerImpressionHelper_h */
