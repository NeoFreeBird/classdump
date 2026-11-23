//
#ifndef _TtC12CallSchedule29ScheduleConversationInfoStore_h
#define _TtC12CallSchedule29ScheduleConversationInfoStore_h
@import Foundation;

@class CallModels.CallConversationInfoProviding, _$s10XUtilities11UnfairQueueCMn, _$s7Combine14AnyCancellableCMn ?, _$s7Combine19CurrentValueSubjectCMn _$sySDySS CallModels.CallConversationInfo _$sG _$ss5NeverOMn, _$sSDySS CallModels.CallConversationInfo, _$sSaySSG, _$sShySSG, _$sSi, _TtCs12_SwiftObject;

@interface CallSchedule.ScheduleConversationInfoStore : Swift._SwiftObject { // (Swift)
    /* instance variables */
    CallModels.CallConversationInfoProviding conversationInfoProvider;
    Swift.Int countLimit;
    nominal type descriptor for XUtilities.UnfairQueue queue;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Dictionary empty-list Swift.String CallModels.CallConversationInfo _$sG nominal type descriptor for Swift.Never subject;
    Swift.Set<Swift.String> requestedConversationIDs;
    Swift.Set<Swift.String> inFlightConversationIDs;
    Swift.Dictionary empty-list Swift.String CallModels.CallConversationInfo cachedConversationInfos;
    [Swift.String] cachedConversationIDsByRecency;
    nominal type descriptor for Combine.AnyCancellable ? memoryWarningCancellable;
}

@end

#endif /* _TtC12CallSchedule29ScheduleConversationInfoStore_h */
