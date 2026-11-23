//
#ifndef _TtC14TFSTwitterCore15TFSSmartTagData_h
#define _TtC14TFSTwitterCore15TFSSmartTagData_h
@import Foundation;

@class NSNumber, NSObject, NSString, _$sSSSg, _$sSa -> TFSTwitterCore.CashTagTradablePlatform, _$sSo8NSNumberCSg;

@interface TFSTwitterCore.TFSSmartTagData : NSObject { // (Swift)
    /* instance variables */
    Swift.Array -> TFSTwitterCore.CashTagTradablePlatform infoTradablePlatforms;
}

@property (nonatomic, readonly) NSString *tagRestId;
@property (nonatomic, readonly) NSNumber *infoSupportsOhlc;
@property (nonatomic, readonly) NSString *infoTicker;
@property (nonatomic, readonly) NSString *latestTimelineId;
@property (nonatomic, readonly) NSString *topTimelineId;
@property (nonatomic, readonly) NSNumber *infoActive;
@property (nonatomic, readonly) NSString *infoThemeOverrideRawValue;

/* instance methods */
- (id)initWithTagRestId:(id)id infoSupportsOhlc:(id)ohlc infoTicker:(id)ticker latestTimelineId:(id)id topTimelineId:(id)id infoActive:(id)active infoThemeOverrideRawValue:(id)value;
- (id)init;

@end

#endif /* _TtC14TFSTwitterCore15TFSSmartTagData_h */
