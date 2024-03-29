#include <string.h>

#include "m2x.h"
#include "client.h"
#include "blueprint.h"
#include "utility.h"

int m2x_blueprint_list(m2x_context *ctx, const char *query, char **out)
{
  int ret;
  char *path;

  path = m2x_internal_create_query_path(ctx, "/blueprints", query);

  ret = m2x_client_get(ctx, path, out);
  m2x_free(path);
  return ret;
}

int m2x_blueprint_view(m2x_context *ctx, const char *blueprint_id, char **out)
{
  int ret;
  char *path;

  path = m2x_internal_create_format_string(ctx, "/blueprints/%s", blueprint_id);

  ret = m2x_client_get(ctx, path, out);
  m2x_free(path);
  return ret;
}

int m2x_blueprint_create(m2x_context *ctx, const char *data, char **out)
{
  return m2x_client_post(ctx, "/blueprints", data, out);
}

int m2x_blueprint_update(m2x_context *ctx, const char *blueprint_id,
                         const char *data, char **out)
{
  int ret;
  char *path;

  path = m2x_internal_create_format_string(ctx, "/blueprints/%s", blueprint_id);

  ret = m2x_client_put(ctx, path, data, out);
  m2x_free(path);
  return ret;
}

int m2x_blueprint_delete(m2x_context *ctx, const char *blueprint_id, char **out)
{
  int ret;
  char *path;

  path = m2x_internal_create_format_string(ctx, "/blueprints/%s", blueprint_id);

  ret = m2x_client_delete(ctx, path, out);
  m2x_free(path);
  return ret;
}

int m2x_json_blueprint_list(m2x_context *ctx, const char *query,
                            JSON_Value **out)
{
  int ret;
  char *str;

  ret = m2x_blueprint_list(ctx, query, &str);
  if (ret == 0) {
    if (out) { *out = json_parse_string(str); }
    m2x_free(str);
  }
  return ret;
}

int m2x_json_blueprint_view(m2x_context *ctx, const char *blueprint_id,
                            JSON_Value **out)
{
  int ret;
  char *str;

  ret = m2x_blueprint_view(ctx, blueprint_id, &str);
  if (ret == 0) {
    if (out) { *out = json_parse_string(str); }
    m2x_free(str);
  }
  return ret;
}

int m2x_json_blueprint_create(m2x_context *ctx, const char *data,
                              JSON_Value **out)
{
  int ret;
  char *str;

  ret = m2x_blueprint_create(ctx, data, &str);
  if (ret == 0) {
    if (out) { *out = json_parse_string(str); }
    m2x_free(str);
  }
  return ret;
}

int m2x_json_blueprint_update(m2x_context *ctx, const char *blueprint_id,
                              const char *data, JSON_Value **out)
{
  int ret;
  char *str;

  ret = m2x_blueprint_update(ctx, blueprint_id, data, &str);
  if (ret == 0) {
    if (out) { *out = json_parse_string(str); }
    m2x_free(str);
  }
  return ret;
}

int m2x_json_blueprint_delete(m2x_context *ctx, const char *blueprint_id,
                              JSON_Value **out)
{
  int ret;
  char *str;

  ret = m2x_blueprint_delete(ctx, blueprint_id, &str);
  if (ret == 0) {
    if (out) { *out = json_parse_string(str); }
    m2x_free(str);
  }
  return ret;
}
