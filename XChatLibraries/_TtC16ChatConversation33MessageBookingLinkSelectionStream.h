//
#ifndef _TtC16ChatConversation33MessageBookingLinkSelectionStream_h
#define _TtC16ChatConversation33MessageBookingLinkSelectionStream_h
@import Foundation;

@class _$s7Combine18PassthroughSubjectCMn _$sySS13bookingLinkID_ ChatModels.MessageBookingLinkOverride _$sSg8overridet _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$sySS9messageID_ ChatModels.MessageBookingLinkSelection _$sSg9selectiont _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySDySS ChatModels.MessageBookingLinkOverride _$sG _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySDySS ChatModels.MessageBookingLinkSelection _$sG _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface ChatConversation.MessageBookingLinkSelectionStream : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.StringmessageID first-element-marker  ChatModels.MessageBookingLinkSelection _$sSg9selectiont nominal type descriptor for Swift.Never eventSubject;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.StringbookingLinkID first-element-marker  ChatModels.MessageBookingLinkOverride _$sSg8overridet nominal type descriptor for Swift.Never overrideEventSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Dictionary empty-list Swift.String ChatModels.MessageBookingLinkOverride _$sG nominal type descriptor for Swift.Never overridesSubject;
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Dictionary empty-list Swift.String ChatModels.MessageBookingLinkSelection _$sG nominal type descriptor for Swift.Never selectionsSubject;
}

@end

#endif /* _TtC16ChatConversation33MessageBookingLinkSelectionStream_h */
