//
#ifndef TFSScribeRangesCollector_h
#define TFSScribeRangesCollector_h
@import Foundation;

@class NSObject;

@interface TFSScribeRangesCollector : NSObject

/* class methods */
+ (id)selectEventRangeInfoWithFilterMap:(id)map filterParameters:(id)parameters database:(id)database tableInfoList:(id)list log:(id)log;
+ (id)selectEventRangeInfoForGroups:(id)groups database:(id)database tableInfoList:(id)list log:(id)log filterMap:(id)map filterParameters:(id)parameters;
+ (id)selectRangeWithConnection:(id)connection tableInfo:(id)info groupName:(id)name groupQueryParameter:(id)parameter filter:(id)filter filterParameters:(id)parameters;
+ (id)sequencerEventsTableInfo;
+ (id)sequencerImpressionsTableInfo;

@end

#endif /* TFSScribeRangesCollector_h */
