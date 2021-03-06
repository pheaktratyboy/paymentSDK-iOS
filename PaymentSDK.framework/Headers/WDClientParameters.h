//
//  WDClientParameters.h
//  PaymentSDK
//
//  Created by Vrana, Jozef on 19/09/2017.
//  Copyright © 2017 Wirecard Technologies GmbH. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "WDEnvironment.h"
#import "WDTracker.h"

@interface WDClientParameters : NSObject

/**
 *  @brief Timeout interval for the payment request.
 *  @details Default value is 60 seconds.
 */
@property (assign, nonatomic) NSTimeInterval timeoutInterval;

/**
 *  @brief Tracker for sending app analytics to a server.
 *  @details It is optional.
 */
@property (strong, nonatomic) WDTracker *tracker;

@end
