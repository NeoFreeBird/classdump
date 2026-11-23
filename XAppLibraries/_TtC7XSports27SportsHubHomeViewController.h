//
#ifndef _TtC7XSports27SportsHubHomeViewController_h
#define _TtC7XSports27SportsHubHomeViewController_h
@import Foundation;

@class Swift.Bool, UIViewController, XSports.SportsHubChromeScroll ?, _$s7Combine12AnyPublisherVMn _$sySSSg _$ss5NeverOMn, _$s7Combine14AnyCancellableCMn ?, _$sSo16UIViewControllerCSSScMYcc, _$sSo16UIViewControllerCSg;

@interface XSports.SportsHubHomeViewController : UIViewController { // (Swift)
    /* instance variables */
    nominal type descriptor for Combine.AnyPublisher  empty-list Swift.String? nominal type descriptor for Swift.Never timelineIDs;
    @Swift.MainActor (Swift.String) -> __C.UIViewController makeContent;
    __C.UIViewController? contentViewController;
    nominal type descriptor for Combine.AnyCancellable ? timelineIDsCancellable;
    Swift.Bool showsScheduleCarousel;
    XSports.SportsHubChromeScroll ? chromeScroll;
}

/* instance methods */
- (id)initWithCoder:(id)coder;
- (void)viewDidLoad;
- (id)initWithNibName:(id)name bundle:(id)bundle;

@end

#endif /* _TtC7XSports27SportsHubHomeViewController_h */
