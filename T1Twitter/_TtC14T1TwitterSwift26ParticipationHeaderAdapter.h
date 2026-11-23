//
#ifndef _TtC14T1TwitterSwift26ParticipationHeaderAdapter_h
#define _TtC14T1TwitterSwift26ParticipationHeaderAdapter_h
@import Foundation;

@class TFNModuleHeaderAdapter;

@interface T1TwitterSwift.ParticipationHeaderAdapter : TFNModuleHeaderAdapter // (Swift)

/* instance methods */
- (double)dataViewController:(id)controller tableViewHeightForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)dataViewController:(id)controller tableViewCellForItem:(id)item withOptions:(id)options atIndexPath:(id)path;
- (id)initWithRequiresIntrinsicSpacingBeforeHeaders:(_Bool)headers;
- (id)init;

@end

#endif /* _TtC14T1TwitterSwift26ParticipationHeaderAdapter_h */
