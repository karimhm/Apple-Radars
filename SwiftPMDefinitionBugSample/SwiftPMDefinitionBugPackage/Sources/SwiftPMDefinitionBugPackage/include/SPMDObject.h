// When importing a Swift Package into an Xcode project
// the `SWIFT_PACKAGE` flag is defined and not defined at the same time.
// Build the project to see the issue.

#if SWIFT_PACKAGE
// `Foundation` is imported only when the `SWIFT_PACKAGE` flag is present.
#import <Foundation/Foundation.h>
#warning "SWIFT_PACKAGE is defined"
#else
#warning "SWIFT_PACKAGE is not defined"
#endif

@interface SPMDObject : NSObject
@end
