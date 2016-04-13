//
//  PDApiClient.h
//  ParseDemo
//
//  Created by zh on 23.04.14.
//  Copyright (c) 2014 Sergii Shevchenko. All rights reserved.
//

#import "AFHTTPSessionManager.h"

typedef void (^FFApiClientSuccessWithEvents)(NSArray * rawEvents);
typedef void (^FFApiClientFailure)(NSURLSessionDataTask * dataTask, NSError * error);

@interface FFApiClient : AFHTTPSessionManager

+ (instancetype)instance;

- (void)loadEventsDataWithSuccess:(FFApiClientSuccessWithEvents)success failure:(FFApiClientFailure)failure;

@end
