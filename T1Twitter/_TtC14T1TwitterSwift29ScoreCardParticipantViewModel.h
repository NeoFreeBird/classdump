//    - LC_BUILD_VERSION:  Platform: iOS, MinOS: 15, SDK: 27.1, Tool: ld (27037.1)
//    - LC_SOURCE_VERSION: 0.0.0.0.0
//
#ifndef _TtC14T1TwitterSwift29ScoreCardParticipantViewModel_h
#define _TtC14T1TwitterSwift29ScoreCardParticipantViewModel_h
@import Foundation;

@class NSObject, T1TwitterSwift.GuideImageInfo ??, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV10ScoreEventV0G5StateOMn ?, _$s10TFSURTCore16URTTimelineEntryV7ContentO4ItemV21ScoreEventParticipantVMn ?, _$sSSSg, _$sSSSgSg, _$sSbSgSg, _$sSo6UIFontCSgSg, _$sSo7UIColorCSgSg;

@interface T1TwitterSwift.ScoreCardParticipantViewModel : NSObject { // (Swift)
    /* instance variables */
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.ScoreEventParticipant ? scoreEventParticipant;
    nominal type descriptor for TFSURTCore.URTTimelineEntry.Content.Item.ScoreEvent.EventState ? eventState;
    Swift.String? winnerId;
    __C.UIColor?? $__lazy_storage_$_color;
    Swift.Bool?? $__lazy_storage_$_isWinner;
    Swift.String?? $__lazy_storage_$_imageUrl;
    T1TwitterSwift.GuideImageInfo ?? $__lazy_storage_$_logoImageInfo;
    Swift.String?? $__lazy_storage_$_name;
    Swift.String?? $__lazy_storage_$_shortName;
    Swift.String?? $__lazy_storage_$_fullName;
    Swift.String?? $__lazy_storage_$_score;
    Swift.String?? $__lazy_storage_$_secondaryScore;
    __C.UIFont?? $__lazy_storage_$_scoreFont;
}

/* instance methods */
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift29ScoreCardParticipantViewModel_h */
