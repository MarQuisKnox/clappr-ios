#import "CLPEventHandler.h"


@interface CLPBaseObject : NSObject

- (void)on:(NSString *)eventName callback:(EventCallback)callback;

- (void)once:(NSString *)eventName callback:(EventCallback)callback;

- (void)off:(NSString *)eventName callback:(EventCallback)callback;

- (void)trigger:(NSString *)eventName;
- (void)trigger:(NSString *)eventName userInfo:(NSDictionary *)userInfo;

- (void)listenTo:(CLPBaseObject *)contextObject
       eventName:(NSString *)eventName
        callback:(EventCallback)callback;

- (void)stopListening;

- (void)stopListening:(CLPBaseObject *)contextObject
            eventName:(NSString *)eventName
             callback:(EventCallback)callback;

@end
