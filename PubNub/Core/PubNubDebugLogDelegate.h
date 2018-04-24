//
//  PubNubDebugLogDelegate.h
//  PubNub Framework
//
//  Created by Praveen on 01/03/18.
//  Copyright © 2018 PubNub. All rights reserved.
//

#ifndef PubNubDebugLogDelegate_h
#define PubNubDebugLogDelegate_h

@protocol PubNubDebugLogDelegate<NSObject>

/**
 @param debugLog Pubnub debug log
 */
- (void)onPubNubDebugLog:(NSString *)debugLog;

@end


#endif /* PubNubDebugLogDelegate_h */
