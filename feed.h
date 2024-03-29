#ifndef M2X_FEED_H
#define M2X_FEED_H

#include "third_party/parson/parson.h"

#if defined(__cplusplus)
extern "C" {
#endif

int m2x_feed_list(m2x_context *ctx, const char *query, char **out);
int m2x_feed_view(m2x_context *ctx, const char *feed_id, char **out);
int m2x_feed_log(m2x_context *ctx, const char *feed_id, char **out);
int m2x_feed_location(m2x_context *ctx, const char *feed_id, char **out);
int m2x_feed_streams(m2x_context *ctx, const char *feed_id, char **out);
int m2x_feed_stream(m2x_context *ctx, const char *feed_id,
                    const char *stream_name, char **out);
int m2x_feed_stream_values(m2x_context *ctx, const char *feed_id,
                           const char *stream_name, const char* query,
                           char **out);
int m2x_feed_triggers(m2x_context *ctx, const char *feed_id, char **out);
int m2x_feed_trigger(m2x_context *ctx, const char *feed_id,
                     const char *trigger_id, char **out);

int m2x_feed_update_location(m2x_context *ctx, const char *feed_id,
                             const char *data, char **out);
int m2x_feed_update_stream(m2x_context *ctx, const char *feed_id,
                           const char *stream_name, const char *data,
                           char **out);
int m2x_feed_delete_stream(m2x_context *ctx, const char *feed_id,
                           const char *stream_name, char **out);
int m2x_feed_post_multiple(m2x_context *ctx, const char *feed_id,
                           const char *data, char **out);
int m2x_feed_create_trigger(m2x_context *ctx, const char *feed_id,
                            const char *data, char **out);
int m2x_feed_update_trigger(m2x_context *ctx, const char *feed_id,
                            const char *trigger_id, const char *data,
                            char **out);
int m2x_feed_test_trigger(m2x_context *ctx, const char *feed_id,
                          const char *trigger_id, char **out);
int m2x_feed_delete_trigger(m2x_context *ctx, const char *feed_id,
                            const char *trigger_id, char **out);

int m2x_json_feed_list(m2x_context *ctx, const char *query, JSON_Value **out);
int m2x_json_feed_view(m2x_context *ctx, const char *feed_id, JSON_Value **out);
int m2x_json_feed_log(m2x_context *ctx, const char *feed_id, JSON_Value **out);
int m2x_json_feed_location(m2x_context *ctx, const char *feed_id, JSON_Value **out);
int m2x_json_feed_streams(m2x_context *ctx, const char *feed_id, JSON_Value **out);
int m2x_json_feed_stream(m2x_context *ctx, const char *feed_id,
                         const char *stream_name, JSON_Value **out);
int m2x_json_feed_stream_values(m2x_context *ctx, const char *feed_id,
                                const char *stream_name, const char *query,
                                JSON_Value **out);
int m2x_json_feed_triggers(m2x_context *ctx, const char *feed_id,
                           JSON_Value **out);
int m2x_json_feed_trigger(m2x_context *ctx, const char *feed_id,
                          const char *trigger_id, JSON_Value **out);

int m2x_json_feed_update_location(m2x_context *ctx, const char *feed_id,
                                  const char *data, JSON_Value **out);
int m2x_json_feed_update_stream(m2x_context *ctx, const char *feed_id,
                                const char *stream_name, const char *data,
                                JSON_Value **out);
int m2x_json_feed_delete_stream(m2x_context *ctx, const char *feed_id,
                                const char *stream_name, JSON_Value **out);
int m2x_json_feed_post_multiple(m2x_context *ctx, const char *feed_id,
                                const char *data, JSON_Value **out);
int m2x_json_feed_create_trigger(m2x_context *ctx, const char *feed_id,
                                 const char *data, JSON_Value **out);
int m2x_json_feed_update_trigger(m2x_context *ctx, const char *feed_id,
                                 const char *trigger_id, const char *data,
                                 JSON_Value **out);
int m2x_json_feed_test_trigger(m2x_context *ctx, const char *feed_id,
                               const char *trigger_id, JSON_Value **out);
int m2x_json_feed_delete_trigger(m2x_context *ctx, const char *feed_id,
                                 const char *trigger_id, JSON_Value **out);

#if defined(__cplusplus)
}  /* extern "C" { */
#endif

#endif  /* M2X_FEED_H */
