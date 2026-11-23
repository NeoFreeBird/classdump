//
#ifndef _TtC14TFSTwitterCore42TFSTwitterAccountTaxonomyEngagementMetrics_h
#define _TtC14TFSTwitterCore42TFSTwitterAccountTaxonomyEngagementMetrics_h
@import Foundation;

@class NSDictionary, NSObject, TFSTwitterCore.TwitterUserDesignatorInfoUserLabelType;

@interface TFSTwitterCore.TFSTwitterAccountTaxonomyEngagementMetrics : NSObject { // (Swift)
    /* instance variables */
    TFSTwitterCore.TwitterUserDesignatorInfoUserLabelType type;
}

@property (nonatomic, readonly) NSDictionary *scribeDictionary;

/* instance methods */
- (id)initWithUserAccountType:(long long)type;
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore42TFSTwitterAccountTaxonomyEngagementMetrics_h */
