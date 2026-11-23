//
#ifndef _TtC20ChatAttachmentViewer19VideoPlaybackStream_h
#define _TtC20ChatAttachmentViewer19VideoPlaybackStream_h
@import Foundation;

@class _$s7Combine18PassthroughSubjectCMn _$sySd _$ss5NeverOMn, _$s7Combine18PassthroughSubjectCMn _$syyt _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn ChatAttachmentViewer.VideoPlaybackState _$ss5NeverOMn, _$s7Combine19CurrentValueSubjectCMn _$sySiSg _$ss5NeverOMn, _TtCs12_SwiftObject;

@interface ChatAttachmentViewer.VideoPlaybackStream : Swift._SwiftObject { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.CurrentValueSubject  empty-list Swift.Int? nominal type descriptor for Swift.Never activeIndex;
    nominal type descriptor for Combine.CurrentValueSubject ChatAttachmentViewer.VideoPlaybackState nominal type descriptor for Swift.Never state;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never toggleRequests;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.Double nominal type descriptor for Swift.Never seekRequests;
    nominal type descriptor for Combine.PassthroughSubject  empty-list () nominal type descriptor for Swift.Never beginScrubRequests;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.Double nominal type descriptor for Swift.Never scrubRequests;
    nominal type descriptor for Combine.PassthroughSubject  empty-list Swift.Double nominal type descriptor for Swift.Never endScrubRequests;
}

@end

#endif /* _TtC20ChatAttachmentViewer19VideoPlaybackStream_h */
