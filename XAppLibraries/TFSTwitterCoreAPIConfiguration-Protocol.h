//
#ifndef TFSTwitterCoreAPIConfiguration_Protocol_h
#define TFSTwitterCoreAPIConfiguration_Protocol_h
@import Foundation;

@protocol TFSTwitterCoreAPIConfiguration

@required

@property (readonly, nonatomic) long long scribeAPISampleSize;
@property (readonly, nonatomic) long long scribeAPIErrorSampleSize;
@property (readonly, nonatomic) _Bool isBirdwatchConsumptionEnabled;
@property (readonly, nonatomic) _Bool isBirdwatchPivotEnabled;
@property (readonly, nonatomic) _Bool isSuperFollowsTweetCreationEnabled;
@property (readonly, nonatomic) _Bool isDontMentionMeAPIEnabled;
@property (readonly, nonatomic) _Bool isArticleRestAPIEnabled;
@property (readonly, nonatomic) _Bool isArticlePreviewEnabled;

@optional

@end

#endif /* TFSTwitterCoreAPIConfiguration_Protocol_h */
